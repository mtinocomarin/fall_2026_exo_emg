// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.50%
// test_accuracy: 74.17%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:52:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.833972, 0.833917,
    -0.156701, 0.156749,
    0.634703, -0.634745,
    0.693300, -0.693254,
    1.171535, -1.171664,
    -1.151519, 1.151690,
    -0.264814, 0.264794,
    -0.002368, 0.002347,
    0.689275, -0.689359,
    0.064577, -0.064285,
    -0.465217, 0.465106,
    0.024620, -0.024741,
};

float Cg_init[2] = {
    -0.604638, -0.604653
};

float xstd_init[12] = {
    0.003182, 0.001138, 0.105187, 0.170381, 0.001292, 0.000395, 0.020734, 0.071495, 0.000512, 0.000076, 0.015879, 0.060541
};

float xmean_init[12] = {
    0.009588, -0.006312, 0.177112, 0.593467, 0.003103, -0.007753, 0.005644, 0.051000, 0.003103, -0.007815, 0.003867, 0.063200
};

