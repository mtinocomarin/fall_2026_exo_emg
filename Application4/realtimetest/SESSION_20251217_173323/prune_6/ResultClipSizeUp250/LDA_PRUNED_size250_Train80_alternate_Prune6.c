// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.35%
// test_accuracy: 70.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 18:09:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.689034, 0.688983,
    0.994367, -0.994230,
    -0.155492, 0.155428,
    -0.155343, 0.155307,
    1.324593, -1.324648,
    0.093927, -0.093888,
    -1.423428, 1.423406,
    -1.125185, 1.125212,
    -0.560862, 0.560859,
    -0.287466, 0.287461,
    -0.154692, 0.154686,
    2.208511, -2.208508,
};

float Cg_init[2] = {
    -0.763512, -0.763502
};

float xstd_init[12] = {
    0.001106, 0.000124, 0.024894, 0.094148, 0.002576, 0.000703, 0.062949, 0.149505, 0.005162, 0.001949, 0.167268, 0.251207
};

float xmean_init[12] = {
    0.005437, -0.007725, 0.007949, 0.124615, 0.004158, -0.007564, 0.026154, 0.133077, 0.011615, -0.005857, 0.184872, 0.535000
};

