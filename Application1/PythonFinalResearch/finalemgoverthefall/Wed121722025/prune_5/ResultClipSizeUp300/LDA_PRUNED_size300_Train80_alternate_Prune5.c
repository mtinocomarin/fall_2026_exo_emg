// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.93%
// test_accuracy: 56.25%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:43:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.584887, 0.584870,
    0.327752, -0.327721,
    0.236275, -0.236276,
    -0.128292, 0.128274,
    -0.584215, 0.584228,
    -0.264423, 0.264401,
    0.275487, -0.275480,
    0.271231, -0.271235,
    -0.865103, 0.865084,
    0.318203, -0.318159,
    -0.161507, 0.161496,
    0.418992, -0.419010,
};

float Cg_init[2] = {
    -0.270982, -0.270976
};

float xstd_init[12] = {
    0.001026, 0.000081, 0.010879, 0.082099, 0.002626, 0.000753, 0.079896, 0.169701, 0.000874, 0.000115, 0.017970, 0.074827
};

float xmean_init[12] = {
    0.006457, -0.007687, 0.004049, 0.141333, 0.008588, -0.006875, 0.098667, 0.455259, 0.004321, -0.007715, 0.009580, 0.129630
};

