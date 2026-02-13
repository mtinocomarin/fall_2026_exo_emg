// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.75%
// test_accuracy: 64.58%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt']}
// generated: 2025-12-17 14:41:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.214043, 2.214106,
    1.068623, -1.068768,
    0.261069, -0.261058,
    -0.349650, 0.349721,
    0.856442, -0.856491,
    -1.999760, 1.999837,
    0.129762, -0.129765,
    -0.805762, 0.805766,
    0.203658, -0.203654,
    0.100424, -0.100403,
    0.305213, -0.305204,
    -0.136048, 0.136025,
};

float Cg_init[2] = {
    -1.021780, -1.021807
};

float xstd_init[12] = {
    0.000908, 0.000132, 0.021514, 0.099119, 0.004306, 0.001367, 0.094663, 0.156913, 0.001334, 0.000200, 0.029887, 0.122420
};

float xmean_init[12] = {
    0.005758, -0.007648, 0.012222, 0.163333, 0.011303, -0.006038, 0.175833, 0.581250, 0.005234, -0.007537, 0.028889, 0.261667
};

