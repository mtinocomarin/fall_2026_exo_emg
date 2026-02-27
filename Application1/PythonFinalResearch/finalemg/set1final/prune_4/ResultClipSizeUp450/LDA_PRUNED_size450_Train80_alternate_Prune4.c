// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 53.12%
// test_accuracy: 50.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt']}
// generated: 2026-02-13 17:10:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.651832, 0.651832,
    -0.108577, 0.108572,
    0.000000, 0.000000,
    -0.402937, -0.402937,
    -0.576041, -0.576041,
    -0.595178, -0.595178,
    -0.922237, -0.922237,
    0.946118, 0.946118,
    0.672351, 0.672351,
    1.033366, 1.033366,
    1.063093, 1.063093,
    0.966761, 0.966761,
};

float Cg_init[2] = {
    -1.942598, 1.551577
};

float xstd_init[12] = {
    0.000267, 0.000013, 1.000000, 0.014015, 0.002117, 0.000705, 0.072370, 0.117541, 0.001901, 0.000496, 0.065916, 0.170609
};

float xmean_init[12] = {
    0.002627, -0.007913, 0.000000, 0.005625, 0.008208, -0.006630, 0.146667, 0.470000, 0.006310, -0.007098, 0.085833, 0.346875
};

