// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.98%
// test_accuracy: 80.56%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 16:06:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.057990, 1.057952,
    -0.035487, 0.035569,
    0.594819, -0.594840,
    0.902744, -0.902747,
    1.051032, -1.050930,
    -1.264523, 1.264377,
    0.057270, -0.057253,
    -0.056652, 0.056678,
    -0.516362, 0.516421,
    0.528083, -0.528321,
    -0.410466, 0.410555,
    0.141062, -0.140968,
};

float Cg_init[2] = {
    -0.463020, -0.463034
};

float xstd_init[12] = {
    0.003671, 0.001333, 0.100699, 0.165707, 0.001673, 0.000501, 0.028584, 0.082494, 0.001601, 0.000092, 0.017185, 0.066749
};

float xmean_init[12] = {
    0.009875, -0.006248, 0.170481, 0.584445, 0.003290, -0.007707, 0.007627, 0.054074, 0.003261, -0.007807, 0.004774, 0.067901
};

