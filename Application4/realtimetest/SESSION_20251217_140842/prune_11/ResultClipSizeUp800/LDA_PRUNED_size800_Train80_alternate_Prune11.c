// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.67%
// test_accuracy: 77.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:42:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.012217, 3.012406,
    1.251526, -1.251884,
    0.681370, -0.681288,
    -0.963944, 0.964090,
    -1.318209, 1.318220,
    0.072544, -0.072532,
    -0.501879, 0.501870,
    0.953688, -0.953718,
    0.965399, -0.965418,
    -0.043053, 0.043081,
    0.008070, -0.008072,
    -0.322955, 0.322939,
};

float Cg_init[2] = {
    -1.170773, -1.170815
};

float xstd_init[12] = {
    0.001362, 0.000234, 0.035359, 0.144166, 0.004001, 0.001175, 0.087348, 0.178281, 0.000877, 0.000172, 0.033065, 0.121635
};

float xmean_init[12] = {
    0.006154, -0.007582, 0.017422, 0.220000, 0.010004, -0.006423, 0.140978, 0.547733, 0.005202, -0.007533, 0.029689, 0.264267
};

