// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.30%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt']}
// generated: 2026-02-13 14:47:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.146765, -0.146737,
    -0.275282, 0.275168,
    0.024307, -0.024284,
    -0.113383, 0.113432,
    1.965830, -1.965624,
    -1.720419, 1.720151,
    -0.323188, 0.323220,
    0.257521, -0.257473,
    -0.444024, 0.443962,
    -0.874137, 0.874232,
    0.168631, -0.168688,
    1.836021, -1.835989,
};

float Cg_init[2] = {
    -0.725397, -0.725338
};

float xstd_init[12] = {
    0.000896, 0.000079, 0.007273, 0.067857, 0.000751, 0.000127, 0.015841, 0.058071, 0.003394, 0.000988, 0.114144, 0.205861
};

float xmean_init[12] = {
    0.005586, -0.007758, 0.001573, 0.092050, 0.002418, -0.007846, 0.005300, 0.051677, 0.008971, -0.006660, 0.128033, 0.461118
};

