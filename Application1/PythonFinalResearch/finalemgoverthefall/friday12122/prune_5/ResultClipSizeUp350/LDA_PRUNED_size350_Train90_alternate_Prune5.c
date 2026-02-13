// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.26%
// test_accuracy: 77.08%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-12 16:04:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.850734, 0.850758,
    -0.168391, 0.168498,
    0.489908, -0.489933,
    0.810507, -0.810554,
    0.923209, -0.923358,
    -1.231434, 1.231621,
    0.140050, -0.140094,
    -0.049491, 0.049488,
    -0.281956, 0.282149,
    0.426922, -0.427555,
    -0.464375, 0.464591,
    0.204237, -0.203936,
};

float Cg_init[2] = {
    -0.401509, -0.401566
};

float xstd_init[12] = {
    0.003814, 0.001408, 0.099678, 0.170151, 0.001698, 0.000518, 0.031830, 0.086091, 0.000988, 0.000089, 0.018929, 0.064869
};

float xmean_init[12] = {
    0.009896, -0.006240, 0.165592, 0.574946, 0.003289, -0.007698, 0.008459, 0.052688, 0.003198, -0.007808, 0.004803, 0.065591
};

