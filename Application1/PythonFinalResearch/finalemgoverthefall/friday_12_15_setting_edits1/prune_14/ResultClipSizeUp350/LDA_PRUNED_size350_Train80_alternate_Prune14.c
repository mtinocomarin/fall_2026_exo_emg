// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.74%
// test_accuracy: 63.54%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt', 'act2\\trial_26.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-12 13:17:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.313328, 1.313355,
    0.251052, -0.251065,
    0.970011, -0.970014,
    0.479985, -0.479993,
    -0.215864, 0.215761,
    -0.192464, 0.192588,
    0.097368, -0.097382,
    0.177316, -0.177328,
    -0.115469, 0.115401,
    -0.459962, 0.460089,
    -0.113449, 0.113398,
    0.614580, -0.614587,
};

float Cg_init[2] = {
    -0.501948, -0.501957
};

float xstd_init[12] = {
    0.004815, 0.002058, 0.366940, 0.124318, 0.001241, 0.000225, 0.057241, 0.141645, 0.000704, 0.000179, 0.059782, 0.138473
};

float xmean_init[12] = {
    0.011172, -0.005486, 0.486728, 1.038704, 0.003506, -0.007739, 0.016667, 0.626667, 0.003590, -0.007727, 0.018210, 0.708333
};

