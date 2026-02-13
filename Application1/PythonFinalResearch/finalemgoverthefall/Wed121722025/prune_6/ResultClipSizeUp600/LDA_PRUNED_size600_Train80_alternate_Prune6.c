// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.10%
// test_accuracy: 55.68%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:44:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.418956, 0.418992,
    0.319350, -0.319445,
    -0.021672, 0.021686,
    -0.215452, 0.215496,
    -0.493188, 0.493211,
    -0.072680, 0.072677,
    0.053545, -0.053567,
    0.239915, -0.239897,
    -0.559094, 0.559162,
    0.249162, -0.249284,
    0.046814, -0.046793,
    0.136624, -0.136593,
};

float Cg_init[2] = {
    -0.169768, -0.169787
};

float xstd_init[12] = {
    0.001021, 0.000080, 0.010751, 0.079637, 0.003068, 0.000852, 0.092537, 0.181818, 0.000826, 0.000109, 0.018426, 0.073124
};

float xmean_init[12] = {
    0.006482, -0.007689, 0.003730, 0.143986, 0.008605, -0.006847, 0.106201, 0.437343, 0.004324, -0.007719, 0.009744, 0.127623
};

