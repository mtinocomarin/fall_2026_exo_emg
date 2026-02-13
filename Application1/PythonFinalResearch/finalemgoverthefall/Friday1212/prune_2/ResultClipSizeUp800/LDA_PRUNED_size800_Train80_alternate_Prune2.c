// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.78%
// test_accuracy: 74.58%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:46:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.356613, 0.356641,
    -0.410939, 0.410935,
    0.210268, -0.210312,
    0.522809, -0.522791,
    0.680391, -0.680486,
    -0.773001, 0.773157,
    -0.023932, 0.023891,
    -0.066639, 0.066616,
    0.547351, -0.547311,
    -0.137187, 0.137154,
    -0.223094, 0.223111,
    0.051464, -0.051480,
};

float Cg_init[2] = {
    -0.298474, -0.298485
};

float xstd_init[12] = {
    0.003744, 0.001475, 0.107750, 0.168460, 0.001236, 0.000377, 0.022181, 0.070257, 0.000498, 0.000073, 0.013808, 0.059011
};

float xmean_init[12] = {
    0.009779, -0.006214, 0.179823, 0.591600, 0.003017, -0.007767, 0.005333, 0.046045, 0.003071, -0.007816, 0.003200, 0.062800
};

