// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.668424, 0.668427,
    -0.138271, 0.138299,
    0.000000, 0.000000,
    -0.399062, -0.399062,
    0.498775, 0.498775,
    -0.116631, -0.116631,
    0.513851, 0.513851,
    1.076716, 1.076716,
    -1.198288, -1.198288,
    -1.276780, -1.276780,
    -1.389564, -1.389564,
    -1.230500, -1.230500,
};

float Cg_init[2] = {
    1.762220, -2.179686
};

float xstd_init[12] = {
    0.000216, 0.000014, 1.000000, 0.015119, 0.002013, 0.000768, 0.070837, 0.112388, 0.001737, 0.000440, 0.066637, 0.174061
};

float xmean_init[12] = {
    0.002686, -0.007913, 0.000000, 0.006667, 0.008543, -0.006540, 0.147407, 0.485555, 0.006496, -0.007102, 0.096296, 0.350000
};

