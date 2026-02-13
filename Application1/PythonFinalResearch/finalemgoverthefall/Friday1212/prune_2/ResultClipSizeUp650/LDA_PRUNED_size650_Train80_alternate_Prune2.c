// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.22%
// test_accuracy: 72.40%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:46:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.521684, 0.521644,
    -0.342789, 0.342798,
    0.356508, -0.356521,
    0.595708, -0.595685,
    0.679398, -0.679175,
    -0.703060, 0.702821,
    -0.011188, 0.011223,
    -0.077654, 0.077641,
    -0.407671, 0.407408,
    0.266246, -0.265776,
    -0.266069, 0.265937,
    0.120763, -0.120994,
};

float Cg_init[2] = {
    -0.239956, -0.239928
};

float xstd_init[12] = {
    0.003928, 0.001509, 0.109909, 0.173367, 0.001426, 0.000413, 0.024669, 0.072846, 0.001643, 0.000089, 0.015281, 0.066842
};

float xmean_init[12] = {
    0.009943, -0.006180, 0.181408, 0.591111, 0.003100, -0.007757, 0.005852, 0.046389, 0.003215, -0.007811, 0.003704, 0.064278
};

