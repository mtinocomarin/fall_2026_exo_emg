// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.77%
// test_accuracy: 78.47%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-12 12:45:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.177642, 1.177655,
    0.351369, -0.351371,
    0.404769, -0.404790,
    1.136579, -1.136569,
    -0.550451, 0.550613,
    0.256188, -0.256350,
    0.023194, -0.023210,
    -0.270547, 0.270559,
    0.393260, -0.393235,
    -0.102571, 0.102518,
    -0.517484, 0.517504,
    -0.086824, 0.086819,
};

float Cg_init[2] = {
    -0.511464, -0.511471
};

float xstd_init[12] = {
    0.004409, 0.001931, 0.151736, 0.206440, 0.001330, 0.000240, 0.034264, 0.097438, 0.000648, 0.000159, 0.025686, 0.099248
};

float xmean_init[12] = {
    0.010676, -0.005595, 0.245785, 0.686243, 0.003557, -0.007732, 0.012910, 0.087407, 0.003544, -0.007733, 0.011076, 0.119471
};

