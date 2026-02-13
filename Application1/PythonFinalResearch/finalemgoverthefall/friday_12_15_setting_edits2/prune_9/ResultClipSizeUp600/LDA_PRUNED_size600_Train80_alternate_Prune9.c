// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.19%
// test_accuracy: 73.86%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 12:40:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.745103, 0.745112,
    0.214295, -0.214284,
    0.448483, -0.448512,
    0.844520, -0.844514,
    -0.428506, 0.428442,
    0.170370, -0.170277,
    -0.063871, 0.063871,
    -0.201784, 0.201753,
    0.368088, -0.368088,
    -0.204652, 0.204659,
    -0.561900, 0.561908,
    -0.060742, 0.060732,
};

float Cg_init[2] = {
    -0.416040, -0.416047
};

float xstd_init[12] = {
    0.004161, 0.001789, 0.145702, 0.203642, 0.001214, 0.000218, 0.030856, 0.089610, 0.000693, 0.000178, 0.029362, 0.109232
};

float xmean_init[12] = {
    0.010304, -0.005752, 0.238789, 0.679605, 0.003480, -0.007746, 0.010856, 0.082214, 0.003543, -0.007727, 0.012754, 0.120475
};

