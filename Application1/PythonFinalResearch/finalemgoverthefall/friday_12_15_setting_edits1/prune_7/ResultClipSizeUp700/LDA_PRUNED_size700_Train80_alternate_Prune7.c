// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.92%
// test_accuracy: 73.08%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:14:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.592994, 0.593000,
    -0.143256, 0.143190,
    0.651465, -0.651438,
    0.331260, -0.331246,
    -0.494749, 0.494956,
    0.197481, -0.197694,
    -0.016793, 0.016793,
    0.244485, -0.244470,
    0.223504, -0.223244,
    -0.317125, 0.316727,
    -0.295176, 0.295293,
    0.379348, -0.379317,
};

float Cg_init[2] = {
    -0.282156, -0.282140
};

float xstd_init[12] = {
    0.004548, 0.002107, 0.342748, 0.121011, 0.001093, 0.000195, 0.051066, 0.130375, 0.000658, 0.000165, 0.046338, 0.137868
};

float xmean_init[12] = {
    0.010320, -0.005704, 0.433333, 1.038338, 0.003396, -0.007760, 0.013128, 0.616923, 0.003510, -0.007735, 0.013949, 0.698893
};

