// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.30%
// test_accuracy: 79.46%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:40:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.068621, 1.068597,
    0.268547, -0.268480,
    0.226020, -0.226047,
    0.850584, -0.850571,
    -0.320763, 0.320803,
    -0.011866, 0.011782,
    -0.047945, 0.047954,
    0.040780, -0.040758,
    0.005690, -0.005785,
    0.121056, -0.120811,
    -0.480231, 0.480173,
    -0.059101, 0.058984,
};

float Cg_init[2] = {
    -0.329179, -0.329178
};

float xstd_init[12] = {
    0.004689, 0.002108, 0.144676, 0.201030, 0.001291, 0.000233, 0.032571, 0.093367, 0.000676, 0.000159, 0.028156, 0.102733
};

float xmean_init[12] = {
    0.010759, -0.005588, 0.245124, 0.681379, 0.003502, -0.007741, 0.011823, 0.082365, 0.003535, -0.007733, 0.013202, 0.118621
};

