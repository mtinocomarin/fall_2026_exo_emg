// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.92%
// test_accuracy: 56.25%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:42:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.481155, 5.481298,
    2.823994, -2.824152,
    -0.255799, 0.255818,
    -0.017510, 0.017548,
    2.067402, -2.067488,
    -3.040399, 3.040477,
    0.189692, -0.189686,
    0.421751, -0.421761,
    -0.517447, 0.517533,
    0.560115, -0.560228,
    0.097311, -0.097285,
    -0.423856, 0.423892,
};

float Cg_init[2] = {
    -1.645501, -1.645559
};

float xstd_init[12] = {
    0.001135, 0.000206, 0.028030, 0.136420, 0.004547, 0.001421, 0.087196, 0.156684, 0.001372, 0.000165, 0.032544, 0.114756
};

float xmean_init[12] = {
    0.006135, -0.007588, 0.016111, 0.199583, 0.011137, -0.006116, 0.163055, 0.546250, 0.005269, -0.007553, 0.033056, 0.258750
};

