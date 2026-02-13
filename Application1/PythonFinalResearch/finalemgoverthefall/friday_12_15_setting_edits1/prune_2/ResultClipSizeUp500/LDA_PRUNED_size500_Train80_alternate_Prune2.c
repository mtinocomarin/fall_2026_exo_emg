// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.52%
// test_accuracy: 72.22%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:12:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.682868, 0.682811,
    0.031637, -0.031647,
    0.421962, -0.421926,
    0.327231, -0.327221,
    -0.372306, 0.372560,
    0.054364, -0.054598,
    0.010389, -0.010403,
    0.253093, -0.253079,
    0.193197, -0.192984,
    -0.204554, 0.204224,
    -0.320436, 0.320541,
    0.220038, -0.220019,
};

float Cg_init[2] = {
    -0.228537, -0.228527
};

float xstd_init[12] = {
    0.004858, 0.002300, 0.353525, 0.120582, 0.001171, 0.000208, 0.052463, 0.133755, 0.000666, 0.000162, 0.049047, 0.144921
};

float xmean_init[12] = {
    0.010860, -0.005467, 0.460246, 1.031259, 0.003438, -0.007753, 0.013210, 0.620666, 0.003550, -0.007732, 0.016296, 0.697630
};

