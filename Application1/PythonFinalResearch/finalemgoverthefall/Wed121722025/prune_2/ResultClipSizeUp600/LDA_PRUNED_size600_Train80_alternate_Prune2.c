// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_2\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.36%
// test_accuracy: 53.41%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 13:42:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.277586, 0.277640,
    0.121760, -0.121913,
    0.026350, -0.026326,
    -0.084395, 0.084469,
    -0.400446, 0.400517,
    -0.045925, 0.045852,
    -0.009623, 0.009604,
    0.274546, -0.274555,
    -0.407755, 0.407676,
    0.137037, -0.136832,
    0.005905, -0.005951,
    0.151046, -0.151143,
};

float Cg_init[2] = {
    -0.103803, -0.103803
};

float xstd_init[12] = {
    0.000985, 0.000078, 0.011919, 0.079806, 0.002942, 0.000816, 0.089220, 0.177291, 0.000830, 0.000107, 0.019071, 0.073235
};

float xmean_init[12] = {
    0.006449, -0.007691, 0.004566, 0.142061, 0.008682, -0.006839, 0.109010, 0.445818, 0.004293, -0.007722, 0.010061, 0.124910
};

