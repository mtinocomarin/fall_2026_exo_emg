// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.27%
// test_accuracy: 72.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:53:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.870128, 0.870146,
    -0.100916, 0.100912,
    0.683011, -0.683055,
    0.778845, -0.778819,
    1.228395, -1.228486,
    -1.115328, 1.115474,
    -0.443106, 0.443073,
    0.011471, -0.011493,
    0.788516, -0.788507,
    -0.023619, 0.023655,
    -0.550405, 0.550394,
    0.070604, -0.070636,
};

float Cg_init[2] = {
    -0.695311, -0.695327
};

float xstd_init[12] = {
    0.003220, 0.001124, 0.104790, 0.171919, 0.001384, 0.000426, 0.022235, 0.075163, 0.000523, 0.000080, 0.017309, 0.062011
};

float xmean_init[12] = {
    0.009626, -0.006298, 0.175277, 0.592793, 0.003129, -0.007744, 0.006262, 0.050688, 0.003113, -0.007813, 0.004534, 0.063887
};

