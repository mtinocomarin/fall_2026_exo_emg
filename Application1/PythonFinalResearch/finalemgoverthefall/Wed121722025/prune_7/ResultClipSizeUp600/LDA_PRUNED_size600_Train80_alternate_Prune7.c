// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.73%
// test_accuracy: 55.11%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:44:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.486161, 0.486264,
    0.374687, -0.374942,
    -0.021236, 0.021270,
    -0.271241, 0.271375,
    -0.575042, 0.575044,
    -0.094837, 0.094864,
    0.119511, -0.119548,
    0.272062, -0.272034,
    -0.527153, 0.527229,
    0.217000, -0.217118,
    0.067355, -0.067352,
    0.134096, -0.134065,
};

float Cg_init[2] = {
    -0.191858, -0.191895
};

float xstd_init[12] = {
    0.001027, 0.000080, 0.010767, 0.079549, 0.003115, 0.000866, 0.093834, 0.183930, 0.000826, 0.000109, 0.018424, 0.073405
};

float xmean_init[12] = {
    0.006492, -0.007689, 0.003685, 0.143491, 0.008574, -0.006849, 0.105891, 0.434618, 0.004349, -0.007716, 0.009842, 0.129673
};

