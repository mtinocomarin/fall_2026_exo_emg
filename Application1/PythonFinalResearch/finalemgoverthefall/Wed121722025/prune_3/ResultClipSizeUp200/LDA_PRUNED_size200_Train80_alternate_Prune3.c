// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.01%
// test_accuracy: 62.50%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 13:42:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.398759, 0.398645,
    0.010590, -0.010370,
    0.134047, -0.134080,
    0.085694, -0.085792,
    -0.627936, 0.627893,
    0.040009, -0.039960,
    0.209771, -0.209754,
    0.018023, -0.018034,
    -0.556946, 0.556889,
    -0.021957, 0.022078,
    -0.066967, 0.066931,
    0.464224, -0.464251,
};

float Cg_init[2] = {
    -0.215847, -0.215846
};

float xstd_init[12] = {
    0.001023, 0.000077, 0.009956, 0.081548, 0.002247, 0.000601, 0.072469, 0.153337, 0.000892, 0.000115, 0.019148, 0.074840
};

float xmean_init[12] = {
    0.006383, -0.007692, 0.003985, 0.142069, 0.008511, -0.006936, 0.096092, 0.448965, 0.004344, -0.007718, 0.010268, 0.134023
};

