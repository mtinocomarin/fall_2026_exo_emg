// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.76%
// test_accuracy: 72.92%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-12 16:04:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.621767, 0.621756,
    -0.250170, 0.250142,
    0.416411, -0.416421,
    0.668352, -0.668328,
    0.693271, -0.693094,
    -0.744470, 0.744277,
    -0.017929, 0.017966,
    -0.084165, 0.084153,
    -0.398303, 0.398046,
    0.331151, -0.330651,
    -0.292192, 0.292051,
    0.073875, -0.074119,
};

float Cg_init[2] = {
    -0.286930, -0.286896
};

float xstd_init[12] = {
    0.003699, 0.001339, 0.103140, 0.166491, 0.001482, 0.000436, 0.025444, 0.074362, 0.001622, 0.000088, 0.015401, 0.068213
};

float xmean_init[12] = {
    0.009774, -0.006277, 0.172295, 0.582903, 0.003155, -0.007740, 0.006452, 0.048441, 0.003235, -0.007808, 0.004050, 0.067366
};

