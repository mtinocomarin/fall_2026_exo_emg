// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.96%
// test_accuracy: 70.31%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-12 12:47:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.175129, 1.175129,
    0.368573, -0.368539,
    0.623515, -0.623531,
    0.994944, -0.994928,
    -0.884679, 0.884801,
    0.526951, -0.527081,
    0.045719, -0.045755,
    -0.183744, 0.183761,
    0.534941, -0.535104,
    -0.335161, 0.335487,
    -0.572874, 0.572819,
    0.217351, -0.217496,
};

float Cg_init[2] = {
    -0.537450, -0.537472
};

float xstd_init[12] = {
    0.004204, 0.001846, 0.157920, 0.212609, 0.001269, 0.000218, 0.033867, 0.089861, 0.000615, 0.000148, 0.024348, 0.099650
};

float xmean_init[12] = {
    0.010585, -0.005616, 0.256173, 0.697592, 0.003518, -0.007742, 0.012160, 0.086019, 0.003524, -0.007734, 0.010556, 0.120463
};

