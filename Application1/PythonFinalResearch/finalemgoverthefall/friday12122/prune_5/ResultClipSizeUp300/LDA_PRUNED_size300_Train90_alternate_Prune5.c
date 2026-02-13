// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.58%
// test_accuracy: 80.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:04:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.875529, 0.875557,
    -0.116132, 0.116169,
    0.615487, -0.615509,
    0.701565, -0.701575,
    0.971795, -0.971764,
    -1.540278, 1.540221,
    0.218438, -0.218436,
    0.150915, -0.150896,
    -0.179091, 0.179150,
    0.422084, -0.422353,
    -0.515960, 0.516058,
    0.246543, -0.246428,
};

float Cg_init[2] = {
    -0.424988, -0.425005
};

float xstd_init[12] = {
    0.003673, 0.001339, 0.097286, 0.164161, 0.001734, 0.000534, 0.031204, 0.086652, 0.000917, 0.000097, 0.019882, 0.067651
};

float xmean_init[12] = {
    0.009731, -0.006286, 0.164387, 0.568645, 0.003306, -0.007691, 0.008000, 0.053032, 0.003208, -0.007805, 0.005075, 0.068387
};

