// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.73%
// test_accuracy: 80.56%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 16:06:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.016404, 1.016379,
    0.041880, -0.041819,
    0.529338, -0.529354,
    0.841266, -0.841271,
    0.945541, -0.945440,
    -1.154765, 1.154611,
    0.009873, -0.009845,
    -0.025377, 0.025403,
    -0.461048, 0.461103,
    0.447074, -0.447300,
    -0.426541, 0.426632,
    0.176963, -0.176878,
};

float Cg_init[2] = {
    -0.422744, -0.422757
};

float xstd_init[12] = {
    0.003674, 0.001374, 0.100542, 0.163926, 0.001652, 0.000494, 0.028104, 0.081782, 0.001575, 0.000092, 0.017387, 0.066573
};

float xmean_init[12] = {
    0.009871, -0.006239, 0.168625, 0.583651, 0.003260, -0.007711, 0.007354, 0.053016, 0.003256, -0.007806, 0.004921, 0.068492
};

