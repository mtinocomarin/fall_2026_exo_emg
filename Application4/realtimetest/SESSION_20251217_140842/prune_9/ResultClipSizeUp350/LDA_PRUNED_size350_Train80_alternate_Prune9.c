// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.05%
// test_accuracy: 64.58%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 14:41:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.178518, 2.178602,
    0.914243, -0.914405,
    0.295703, -0.295709,
    -0.207919, 0.207999,
    0.644848, -0.644879,
    -1.740537, 1.740579,
    -0.028598, 0.028602,
    -0.682618, 0.682618,
    -0.063700, 0.063790,
    0.410558, -0.410657,
    0.200789, -0.200766,
    -0.216636, 0.216651,
};

float Cg_init[2] = {
    -0.963595, -0.963619
};

float xstd_init[12] = {
    0.000947, 0.000139, 0.021592, 0.103007, 0.004415, 0.001421, 0.096529, 0.161018, 0.001398, 0.000173, 0.030518, 0.115222
};

float xmean_init[12] = {
    0.005790, -0.007647, 0.011111, 0.163333, 0.011689, -0.005935, 0.183175, 0.579048, 0.005284, -0.007557, 0.028254, 0.250952
};

