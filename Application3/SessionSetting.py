import os
import logging
import json

class SessionSetting:

    DEFAULTS = {
        "Session_Folder_Name": None,
        "Session_Folder_Path": None,
        "Session_Base_Folder": None,
        "Serial_Port": None,
    }

    def __init__(self, base_folder: str, session_folder: str):
        self.session_folder = session_folder
        self.base_folder = base_folder
        self.settings_path = os.path.join(self.session_folder, "settings.json")
        self.settings = {}
        self.load_settings()

    def load_settings(self):
        if os.path.exists(self.settings_path):
            with open(self.settings_path, 'r') as f:
                self.settings = json.load(f)
        else:
            logging.warning(f"Settings file not found at {self.settings_path}. Using default settings.")
            self.settings = dict(self.DEFAULTS)  # copy defaults

        # Always enforce these core fields based on current paths
        self.settings["Session_Folder_Path"] = self.session_folder
        self.settings["Session_Base_Folder"] = self.base_folder
        self.settings["Session_Folder_Name"] = os.path.basename(self.session_folder)

        # Save after ensuring core fields are set
        self.save()


    def save(self):
        with open(self.settings_path, "w") as f:
            json.dump(self.settings, f, indent=4)

    def get(self, key):
        # Try settings first, fall back to defaults
        return self.settings.get(key, self.DEFAULTS.get(key))

    def set(self, key, value):
        self.settings[key] = value
        self.save()

    def all(self):
        return dict(self.settings)
