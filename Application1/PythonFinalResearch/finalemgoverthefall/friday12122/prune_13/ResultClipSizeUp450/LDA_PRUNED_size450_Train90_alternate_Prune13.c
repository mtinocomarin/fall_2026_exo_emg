// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.96%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 16:09:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.070076, 1.070135,
    -0.151949, 0.151943,
    0.593066, -0.593100,
    1.116014, -1.116018,
    1.193863, -1.194020,
    -1.346783, 1.346962,
    0.001977, -0.001987,
    -0.144705, 0.144701,
    -0.620012, 0.620153,
    0.566214, -0.566503,
    -0.612739, 0.612846,
    0.191525, -0.191402,
};

float Cg_init[2] = {
    -0.574204, -0.574252
};

float xstd_init[12] = {
    0.003860, 0.001454, 0.103223, 0.170540, 0.001768, 0.000549, 0.031850, 0.087712, 0.001590, 0.000093, 0.020071, 0.068054
};

float xmean_init[12] = {
    0.009942, -0.006237, 0.166957, 0.581956, 0.003395, -0.007685, 0.008841, 0.057609, 0.003333, -0.007801, 0.006232, 0.071739
};

