// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.26%
// test_accuracy: 72.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:50:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.184447, 1.184449,
    -0.247503, 0.247509,
    1.124281, -1.124289,
    0.790682, -0.790679,
    1.288287, -1.288222,
    -1.911116, 1.911017,
    0.312190, -0.312167,
    0.032161, -0.032150,
    -0.381687, 0.381678,
    0.758278, -0.758288,
    -0.751365, 0.751367,
    0.275435, -0.275428,
};

float Cg_init[2] = {
    -0.649464, -0.649460
};

float xstd_init[12] = {
    0.003768, 0.001367, 0.103157, 0.174693, 0.001807, 0.000560, 0.034028, 0.093139, 0.001012, 0.000107, 0.022229, 0.068871
};

float xmean_init[12] = {
    0.009907, -0.006213, 0.171942, 0.572696, 0.003357, -0.007689, 0.008812, 0.056348, 0.003267, -0.007799, 0.005797, 0.070087
};

