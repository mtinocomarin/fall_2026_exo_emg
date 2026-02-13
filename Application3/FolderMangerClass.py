import os
import shutil
import logging

logger = logging.getLogger(__name__)

class FolderManager:
    def __init__(self, base_folder):
        self.base_folder = base_folder

    def create_folder(self, folder_name):
        """Creates a folder with the given name inside the base folder."""
        folder_path = os.path.join(self.base_folder, folder_name)
        os.makedirs(folder_path, exist_ok=True)
        logger.info(f"Folder '{folder_name}' created at '{folder_path}'.")
        return folder_path
    
    def create_file(self, folder_name, file_name):
        """Creates a file with the given name inside the specified folder."""
        folder_path = self.create_folder(folder_name)
        file_path = os.path.join(folder_path, file_name)
        with open(file_path, 'w') as f:
            f.write("")  # Create an empty file
        logger.info(f"File '{file_name}' created in folder '{folder_name}'.")
        return file_path
    
    def delete_folder(self, folder_name):
        """Deletes the specified folder and all its contents."""
        folder_path = os.path.join(self.base_folder, folder_name)
        if os.path.exists(folder_path):
            shutil.rmtree(folder_path)
            logger.info(f"Folder '{folder_name}' deleted successfully.")
        else:
            logger.warning(f"Folder '{folder_name}' does not exist.")
        
    def delete_file(self, folder_name, file_name):
        """Deletes the specified file inside the given folder."""
        file_path = os.path.join(self.base_folder, folder_name, file_name)
        if os.path.exists(file_path):
            os.remove(file_path)
            logger.info(f"File '{file_name}' deleted successfully from folder '{folder_name}'.")
        else:
            logger.warning(f"File '{file_name}' does not exist in folder '{folder_name}'.")
    
    def rename_folder(self, old_name, new_name):
        """Renames a folder from old_name to new_name."""
        old_path = os.path.join(self.base_folder, old_name)
        new_path = os.path.join(self.base_folder, new_name)
        if os.path.exists(old_path):
            os.rename(old_path, new_path)
            logger.info(f"Folder renamed from '{old_name}' to '{new_name}'.")
        else:
            logger.warning(f"Folder '{old_name}' does not exist.")
    
    def rename_file(self, folder_name, old_file_name, new_file_name):
        """Renames a file from old_file_name to new_file_name inside the specified folder."""
        old_file_path = os.path.join(self.base_folder, folder_name, old_file_name)
        new_file_path = os.path.join(self.base_folder, folder_name, new_file_name)
        if os.path.exists(old_file_path):
            os.rename(old_file_path, new_file_path)
            logger.info(
                f"File renamed from '{old_file_name}' to '{new_file_name}' in folder '{folder_name}'."
            )
        else:
            logger.warning(f"File '{old_file_name}' does not exist in folder '{folder_name}'.")

    def list_files(self, folder_name):
        """Lists all files in the specified folder."""
        folder_path = os.path.join(self.base_folder, folder_name)
        if os.path.exists(folder_path):
            files = os.listdir(folder_path)
            logger.info(f"Files in folder '{folder_name}': {files}")
            return files
        else:
            logger.warning(f"Folder '{folder_name}' does not exist.")
            return []
        
    def list_folders(self):
        """Lists all folders in the base folder."""
        if os.path.exists(self.base_folder):
            folders = [
                f for f in os.listdir(self.base_folder)
                if os.path.isdir(os.path.join(self.base_folder, f))
            ]
            logger.info(f"Folders in base folder '{self.base_folder}': {folders}")
            return folders
        else:
            logger.warning(f"Base folder '{self.base_folder}' does not exist.")
            return []
        
    def folder_exists(self, folder_name):
        """Checks if a folder exists in the base folder."""
        folder_path = os.path.join(self.base_folder, folder_name)
        exists = os.path.exists(folder_path) and os.path.isdir(folder_path)
        logger.info(f"Folder '{folder_name}' exists: {exists}")
        return exists
    
    def file_exists(self, folder_name, file_name):
        """Checks if a file exists in the specified folder."""
        file_path = os.path.join(self.base_folder, folder_name, file_name)
        exists = os.path.exists(file_path) and os.path.isfile(file_path)
        logger.info(f"File '{file_name}' in folder '{folder_name}' exists: {exists}")
        return exists
    
    def list_items(self, folder_name):
        """
        Lists all items in the specified folder.
        Also includes up to the first 3 items from each subfolder.
        
        Returns a dictionary:
        {
            "files": [...],
            "folders": {
                "subfolder1": [...first 3 items...],
                "subfolder2": [...first 3 items...]
            }
        }
        """
        folder_path = os.path.join(self.base_folder, folder_name)

        if not os.path.exists(folder_path):
            logger.warning(f"Folder '{folder_name}' does not exist.")
            return {"files": [], "folders": {}}

        items = os.listdir(folder_path)

        files = []
        folders = {}

        for item in items:
            item_path = os.path.join(folder_path, item)

            # If it's a subfolder → get up to 3 items
            if os.path.isdir(item_path):
                sub_items = os.listdir(item_path)[:3]  # first 3 only
                folders[item] = sub_items
            else:
                files.append(item)

        logger.info(f"Folder '{folder_name}' files: {files}")
        logger.info(f"Folder '{folder_name}' subfolders (first 3 items): {folders}")

        return {"files": files, "folders": folders}

    
        