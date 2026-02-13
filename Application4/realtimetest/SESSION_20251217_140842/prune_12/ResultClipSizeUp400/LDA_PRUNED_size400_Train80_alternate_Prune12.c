// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 60.71%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:42:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.439569, 5.439511,
    3.175035, -3.174997,
    0.494208, -0.494191,
    -0.099723, 0.099724,
    -0.441208, 0.441224,
    -0.874735, 0.874734,
    0.418657, -0.418674,
    -0.723632, 0.723624,
    -1.581327, 1.581244,
    2.025847, -2.025735,
    1.110085, -1.110084,
    0.087847, -0.087872,
};

float Cg_init[2] = {
    -1.965164, -1.965128
};

float xstd_init[12] = {
    0.000949, 0.000146, 0.025312, 0.103886, 0.004438, 0.001274, 0.073589, 0.151728, 0.000855, 0.000120, 0.029589, 0.106359
};

float xmean_init[12] = {
    0.005983, -0.007625, 0.015714, 0.189286, 0.011083, -0.006106, 0.158571, 0.555714, 0.005003, -0.007593, 0.028571, 0.245714
};

