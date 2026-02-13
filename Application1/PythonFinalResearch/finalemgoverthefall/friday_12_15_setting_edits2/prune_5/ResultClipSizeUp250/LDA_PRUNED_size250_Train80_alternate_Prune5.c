// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.74%
// test_accuracy: 87.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 12:38:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.727690, 1.727737,
    0.620696, -0.620705,
    0.313239, -0.313267,
    1.439552, -1.439542,
    0.091209, -0.091414,
    -0.271271, 0.271457,
    0.086142, -0.086107,
    -0.423684, 0.423661,
    -0.352558, 0.352501,
    0.243059, -0.242954,
    -0.564001, 0.563974,
    0.043982, -0.044013,
};

float Cg_init[2] = {
    -0.636365, -0.636368
};

float xstd_init[12] = {
    0.004562, 0.002077, 0.146348, 0.189253, 0.001522, 0.000280, 0.037787, 0.100994, 0.000656, 0.000163, 0.030967, 0.104829
};

float xmean_init[12] = {
    0.011260, -0.005428, 0.254568, 0.709074, 0.003609, -0.007718, 0.012346, 0.087407, 0.003574, -0.007723, 0.012840, 0.126852
};

