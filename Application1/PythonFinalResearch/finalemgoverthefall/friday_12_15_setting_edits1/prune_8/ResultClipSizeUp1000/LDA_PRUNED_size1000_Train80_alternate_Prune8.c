// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.08%
// test_accuracy: 68.42%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:15:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.608250, 0.608268,
    0.069906, -0.069943,
    0.720148, -0.720157,
    0.235876, -0.235867,
    -0.477080, 0.477131,
    0.198989, -0.199042,
    0.029077, -0.029076,
    0.214193, -0.214187,
    0.278253, -0.278093,
    -0.323624, 0.323395,
    -0.297619, 0.297682,
    0.334018, -0.333990,
};

float Cg_init[2] = {
    -0.262515, -0.262507
};

float xstd_init[12] = {
    0.003871, 0.001702, 0.339313, 0.123767, 0.000954, 0.000169, 0.043121, 0.131419, 0.000640, 0.000156, 0.046007, 0.139427
};

float xmean_init[12] = {
    0.010037, -0.005840, 0.431726, 1.040439, 0.003321, -0.007774, 0.009064, 0.617939, 0.003498, -0.007740, 0.013085, 0.690877
};

