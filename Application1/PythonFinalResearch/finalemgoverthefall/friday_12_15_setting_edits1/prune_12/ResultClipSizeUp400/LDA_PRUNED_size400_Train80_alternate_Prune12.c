// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.36%
// test_accuracy: 72.32%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-12 13:17:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.720022, 0.720014,
    0.038587, -0.038564,
    0.707513, -0.707515,
    0.578735, -0.578733,
    -0.480183, 0.480061,
    0.005819, -0.005696,
    -0.039535, 0.039543,
    0.311172, -0.311172,
    -0.163468, 0.163347,
    -0.114620, 0.114767,
    -0.447360, 0.447324,
    0.491857, -0.491842,
};

float Cg_init[2] = {
    -0.485873, -0.485868
};

float xstd_init[12] = {
    0.004595, 0.001962, 0.341656, 0.126051, 0.001223, 0.000207, 0.055214, 0.135018, 0.000719, 0.000176, 0.057062, 0.143250
};

float xmean_init[12] = {
    0.010818, -0.005619, 0.464286, 1.035000, 0.003508, -0.007744, 0.015238, 0.617428, 0.003593, -0.007723, 0.019762, 0.696857
};

