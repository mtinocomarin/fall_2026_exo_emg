// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.28%
// test_accuracy: 56.25%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 14:40:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.655751, 1.655845,
    0.626427, -0.626660,
    -0.050695, 0.050738,
    -0.011279, 0.011386,
    0.836357, -0.836434,
    -1.303784, 1.303845,
    0.072890, -0.072905,
    -0.179131, 0.179146,
    -0.152146, 0.152225,
    0.140087, -0.140193,
    0.315658, -0.315624,
    0.173913, -0.173891,
};

float Cg_init[2] = {
    -0.523716, -0.523742
};

float xstd_init[12] = {
    0.000952, 0.000166, 0.024546, 0.115349, 0.003871, 0.001195, 0.093517, 0.153292, 0.001210, 0.000187, 0.031615, 0.119005
};

float xmean_init[12] = {
    0.005908, -0.007626, 0.015370, 0.183056, 0.010836, -0.006225, 0.164630, 0.571944, 0.005066, -0.007557, 0.029815, 0.245000
};

