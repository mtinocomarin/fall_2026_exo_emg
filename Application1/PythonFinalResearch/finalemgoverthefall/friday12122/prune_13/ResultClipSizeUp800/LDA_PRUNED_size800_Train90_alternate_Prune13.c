// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.52%
// test_accuracy: 78.33%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:09:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.734169, 0.734234,
    -0.186489, 0.186455,
    0.564102, -0.564145,
    0.682468, -0.682454,
    0.965810, -0.965822,
    -0.997368, 0.997413,
    -0.169361, 0.169337,
    -0.092903, 0.092893,
    0.724001, -0.723890,
    0.107518, -0.107832,
    -0.451679, 0.451807,
    -0.004244, 0.004341,
};

float Cg_init[2] = {
    -0.563835, -0.563853
};

float xstd_init[12] = {
    0.003098, 0.001095, 0.102403, 0.165794, 0.001267, 0.000393, 0.020134, 0.069666, 0.000525, 0.000075, 0.015367, 0.062824
};

float xmean_init[12] = {
    0.009543, -0.006347, 0.172909, 0.588000, 0.003094, -0.007750, 0.005488, 0.048754, 0.003103, -0.007816, 0.003826, 0.063363
};

