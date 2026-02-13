// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.71%
// test_accuracy: 65.18%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:18:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.470532, 0.470558,
    -0.010841, 0.010813,
    0.821920, -0.821899,
    0.410056, -0.410078,
    -0.983849, 0.983772,
    0.239324, -0.239256,
    0.310240, -0.310235,
    0.169390, -0.169390,
    0.264650, -0.264707,
    -0.279577, 0.279682,
    -0.356406, 0.356370,
    0.599695, -0.599717,
};

float Cg_init[2] = {
    -0.455709, -0.455712
};

float xstd_init[12] = {
    0.004054, 0.001769, 0.340542, 0.125894, 0.001161, 0.000202, 0.054532, 0.132747, 0.000583, 0.000137, 0.042589, 0.137211
};

float xmean_init[12] = {
    0.010267, -0.005758, 0.440078, 1.038969, 0.003433, -0.007753, 0.014683, 0.619365, 0.003486, -0.007744, 0.011772, 0.702064
};

