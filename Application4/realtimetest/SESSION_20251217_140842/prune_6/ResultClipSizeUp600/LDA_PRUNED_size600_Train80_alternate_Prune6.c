// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.27%
// test_accuracy: 67.05%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:41:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.109699, 2.109703,
    0.684915, -0.684963,
    0.251575, -0.251552,
    -0.103453, 0.103469,
    0.189582, -0.189605,
    -0.833992, 0.833978,
    -0.058115, 0.058126,
    0.008691, -0.008687,
    0.003466, -0.003374,
    0.059252, -0.059411,
    0.360096, -0.360068,
    -0.012397, 0.012452,
};

float Cg_init[2] = {
    -0.689791, -0.689792
};

float xstd_init[12] = {
    0.001038, 0.000182, 0.029102, 0.117532, 0.003839, 0.001191, 0.089749, 0.152628, 0.001131, 0.000173, 0.032944, 0.116328
};

float xmean_init[12] = {
    0.005912, -0.007626, 0.014061, 0.186727, 0.010738, -0.006257, 0.158909, 0.581818, 0.005029, -0.007566, 0.028242, 0.249636
};

