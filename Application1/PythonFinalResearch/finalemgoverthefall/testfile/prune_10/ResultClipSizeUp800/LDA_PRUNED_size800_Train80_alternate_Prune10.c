// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.97%
// test_accuracy: 72.92%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt']}
// generated: 2026-02-13 14:48:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.154187, 0.154096,
    -0.191602, 0.191837,
    -0.005797, 0.005766,
    0.106884, -0.107003,
    1.612500, -1.612615,
    -1.137001, 1.137114,
    -0.122808, 0.122793,
    0.140348, -0.140362,
    -0.673803, 0.673875,
    -0.369369, 0.369285,
    0.597578, -0.597592,
    1.191445, -1.191440,
};

float Cg_init[2] = {
    -0.598655, -0.598696
};

float xstd_init[12] = {
    0.000924, 0.000076, 0.008674, 0.066634, 0.000684, 0.000106, 0.014650, 0.050387, 0.003352, 0.001034, 0.119433, 0.213648
};

float xmean_init[12] = {
    0.005593, -0.007754, 0.002384, 0.094122, 0.002373, -0.007854, 0.004768, 0.046667, 0.008991, -0.006569, 0.138102, 0.475636
};

