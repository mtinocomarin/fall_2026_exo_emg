// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.48%
// test_accuracy: 76.56%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:47:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.969606, 0.969591,
    0.014845, -0.014851,
    0.470106, -0.470116,
    0.775428, -0.775410,
    0.804151, -0.804265,
    -1.006438, 1.006646,
    0.226710, -0.226791,
    -0.108484, 0.108472,
    -0.098492, 0.098484,
    0.228113, -0.228020,
    -0.376598, 0.376568,
    0.362508, -0.362549,
};

float Cg_init[2] = {
    -0.379648, -0.379655
};

float xstd_init[12] = {
    0.003656, 0.001307, 0.096644, 0.169726, 0.001647, 0.000500, 0.033089, 0.086335, 0.000868, 0.000092, 0.019251, 0.064952
};

float xmean_init[12] = {
    0.009755, -0.006278, 0.166905, 0.564643, 0.003200, -0.007726, 0.008095, 0.047143, 0.003188, -0.007808, 0.004286, 0.065357
};

