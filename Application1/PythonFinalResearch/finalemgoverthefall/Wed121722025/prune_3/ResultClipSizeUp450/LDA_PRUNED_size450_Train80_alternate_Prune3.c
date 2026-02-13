// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.61%
// test_accuracy: 60.16%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 13:42:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.279001, 0.278883,
    0.196230, -0.195935,
    0.128599, -0.128619,
    -0.134697, 0.134531,
    -0.537120, 0.537201,
    -0.189562, 0.189492,
    0.268270, -0.268271,
    0.276957, -0.276957,
    -0.340042, 0.340049,
    0.079008, -0.079008,
    0.005232, -0.005223,
    0.133230, -0.133250,
};

float Cg_init[2] = {
    -0.133725, -0.133708
};

float xstd_init[12] = {
    0.001008, 0.000080, 0.011728, 0.080302, 0.002871, 0.000770, 0.081445, 0.173685, 0.000833, 0.000109, 0.018080, 0.070595
};

float xmean_init[12] = {
    0.006403, -0.007693, 0.004368, 0.140000, 0.008706, -0.006849, 0.102357, 0.446035, 0.004303, -0.007719, 0.009195, 0.126121
};

