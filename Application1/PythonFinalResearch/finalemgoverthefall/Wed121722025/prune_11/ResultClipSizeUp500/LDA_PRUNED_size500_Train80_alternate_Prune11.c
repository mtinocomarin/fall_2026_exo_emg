// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 53.47%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 13:47:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.771094, 0.771092,
    0.292376, -0.292372,
    0.145473, -0.145470,
    -0.175569, 0.175562,
    -0.446615, 0.446634,
    -0.261438, 0.261432,
    0.142421, -0.142429,
    0.199978, -0.199995,
    -0.616127, 0.616078,
    0.233096, -0.232976,
    -0.010220, 0.010193,
    0.241082, -0.241135,
};

float Cg_init[2] = {
    -0.311125, -0.311120
};

float xstd_init[12] = {
    0.001050, 0.000081, 0.011301, 0.081587, 0.003147, 0.000869, 0.088992, 0.177531, 0.000870, 0.000109, 0.016011, 0.074322
};

float xmean_init[12] = {
    0.006474, -0.007687, 0.003951, 0.148254, 0.008697, -0.006837, 0.104127, 0.441799, 0.004380, -0.007716, 0.008466, 0.132593
};

