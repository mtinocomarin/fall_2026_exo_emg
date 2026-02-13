// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.81%
// test_accuracy: 64.77%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.448591, 3.448657,
    0.978043, -0.978157,
    0.379116, -0.379088,
    -0.005102, 0.005146,
    0.047140, -0.047174,
    -0.883264, 0.883296,
    0.157380, -0.157381,
    0.193032, -0.193038,
    0.284453, -0.284445,
    -0.379068, 0.379042,
    0.479947, -0.479943,
    0.342028, -0.342019,
};

float Cg_init[2] = {
    -1.113772, -1.113793
};

float xstd_init[12] = {
    0.001141, 0.000200, 0.032740, 0.127997, 0.004024, 0.001142, 0.086347, 0.160747, 0.000892, 0.000166, 0.032571, 0.116500
};

float xmean_init[12] = {
    0.006071, -0.007595, 0.016277, 0.204935, 0.010315, -0.006354, 0.143377, 0.567273, 0.005121, -0.007549, 0.030822, 0.257403
};

