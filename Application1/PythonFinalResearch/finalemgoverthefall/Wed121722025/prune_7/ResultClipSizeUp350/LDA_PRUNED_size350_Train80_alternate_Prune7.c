// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.67%
// test_accuracy: 57.29%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 13:44:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701739, 0.701741,
    0.185376, -0.185331,
    0.150759, -0.150769,
    -0.003376, 0.003343,
    -0.422977, 0.422926,
    -0.079127, 0.079181,
    0.112297, -0.112285,
    -0.075068, 0.075074,
    -0.795055, 0.795123,
    0.424226, -0.424337,
    -0.169835, 0.169872,
    0.338586, -0.338569,
};

float Cg_init[2] = {
    -0.290832, -0.290845
};

float xstd_init[12] = {
    0.001025, 0.000081, 0.011973, 0.080220, 0.002804, 0.000776, 0.080205, 0.167474, 0.000885, 0.000118, 0.017620, 0.072444
};

float xmean_init[12] = {
    0.006410, -0.007691, 0.004800, 0.141467, 0.008646, -0.006860, 0.102844, 0.447867, 0.004381, -0.007716, 0.008356, 0.130133
};

