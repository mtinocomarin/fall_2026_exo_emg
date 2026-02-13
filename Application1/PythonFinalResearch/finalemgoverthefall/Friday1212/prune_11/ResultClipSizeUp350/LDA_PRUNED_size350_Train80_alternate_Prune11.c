// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.08%
// test_accuracy: 73.96%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-12 15:51:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.245742, 1.245734,
    -0.245978, 0.245958,
    0.685021, -0.685032,
    1.170119, -1.170095,
    1.235941, -1.235985,
    -1.599307, 1.599359,
    0.271850, -0.271848,
    -0.065067, 0.065063,
    -0.497818, 0.497788,
    0.647973, -0.647833,
    -0.709948, 0.709897,
    0.301520, -0.301584,
};

float Cg_init[2] = {
    -0.622900, -0.622893
};

float xstd_init[12] = {
    0.003996, 0.001508, 0.103958, 0.176223, 0.001779, 0.000545, 0.034645, 0.092738, 0.001136, 0.000099, 0.022210, 0.068341
};

float xmean_init[12] = {
    0.009972, -0.006192, 0.169101, 0.573174, 0.003333, -0.007702, 0.008783, 0.055079, 0.003307, -0.007797, 0.006032, 0.071905
};

