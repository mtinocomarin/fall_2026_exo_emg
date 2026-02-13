// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.22%
// test_accuracy: 69.08%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:48:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.489767, 0.489783,
    -0.281476, 0.281487,
    0.457245, -0.457274,
    0.432710, -0.432703,
    0.692627, -0.692487,
    -0.736091, 0.735890,
    -0.010254, 0.010316,
    -0.052015, 0.052020,
    -0.356334, 0.356342,
    0.317411, -0.317541,
    -0.253689, 0.253740,
    0.117496, -0.117454,
};

float Cg_init[2] = {
    -0.223765, -0.223767
};

float xstd_init[12] = {
    0.003419, 0.001332, 0.103417, 0.168569, 0.001268, 0.000358, 0.020957, 0.069387, 0.001386, 0.000079, 0.013457, 0.063298
};

float xmean_init[12] = {
    0.009605, -0.006280, 0.177778, 0.587368, 0.003049, -0.007773, 0.004704, 0.047135, 0.003170, -0.007814, 0.003223, 0.063470
};

