// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.13%
// test_accuracy: 68.75%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-12 12:40:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.761248, 0.761282,
    0.159915, -0.159933,
    0.324076, -0.324112,
    0.560090, -0.560079,
    -0.463038, 0.462895,
    0.253819, -0.253617,
    -0.045008, 0.045002,
    -0.023271, 0.023215,
    0.173866, -0.173806,
    -0.069044, 0.068958,
    -0.376469, 0.376494,
    0.032077, -0.032063,
};

float Cg_init[2] = {
    -0.204360, -0.204361
};

float xstd_init[12] = {
    0.004356, 0.001995, 0.149574, 0.203757, 0.001039, 0.000186, 0.026722, 0.080631, 0.000655, 0.000160, 0.027891, 0.105390
};

float xmean_init[12] = {
    0.010321, -0.005713, 0.241840, 0.682069, 0.003358, -0.007766, 0.008948, 0.075332, 0.003508, -0.007737, 0.012485, 0.116818
};

