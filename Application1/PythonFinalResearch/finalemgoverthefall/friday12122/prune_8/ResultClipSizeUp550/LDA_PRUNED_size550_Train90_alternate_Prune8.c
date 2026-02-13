// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.32%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:06:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.691541, 0.691566,
    -0.255967, 0.255971,
    0.440685, -0.440722,
    0.819608, -0.819597,
    0.865363, -0.865400,
    -0.774564, 0.774610,
    -0.179347, 0.179341,
    -0.143153, 0.143149,
    -0.525330, 0.525405,
    0.383559, -0.383709,
    -0.418080, 0.418133,
    0.222565, -0.222511,
};

float Cg_init[2] = {
    -0.382578, -0.382597
};

float xstd_init[12] = {
    0.003538, 0.001227, 0.102129, 0.171250, 0.001542, 0.000453, 0.023992, 0.073560, 0.001719, 0.000090, 0.017060, 0.068103
};

float xmean_init[12] = {
    0.009792, -0.006312, 0.170858, 0.580143, 0.003231, -0.007726, 0.006619, 0.050214, 0.003260, -0.007807, 0.004810, 0.069500
};

