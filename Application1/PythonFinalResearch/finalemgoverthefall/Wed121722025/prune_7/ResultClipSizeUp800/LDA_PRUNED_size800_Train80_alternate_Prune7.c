// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.13%
// test_accuracy: 54.17%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:45:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.446334, 0.446278,
    0.322832, -0.322707,
    -0.054652, 0.054641,
    -0.187917, 0.187839,
    -0.300141, 0.300265,
    -0.249837, 0.249723,
    -0.027921, 0.027918,
    0.303248, -0.303271,
    -0.528890, 0.528881,
    0.278781, -0.278750,
    0.026326, -0.026317,
    0.070040, -0.070070,
};

float Cg_init[2] = {
    -0.161967, -0.161951
};

float xstd_init[12] = {
    0.001035, 0.000081, 0.011964, 0.080765, 0.003213, 0.000867, 0.092862, 0.187148, 0.000867, 0.000113, 0.019974, 0.075435
};

float xmean_init[12] = {
    0.006518, -0.007685, 0.004693, 0.147147, 0.008525, -0.006869, 0.102294, 0.431467, 0.004373, -0.007710, 0.011093, 0.130347
};

