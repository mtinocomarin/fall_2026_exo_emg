// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.41%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:14:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.595107, 0.595130,
    0.161832, -0.161850,
    0.565544, -0.565558,
    0.331983, -0.331973,
    -0.473965, 0.473840,
    0.155215, -0.155076,
    0.029320, -0.029324,
    0.158239, -0.158245,
    0.209695, -0.209612,
    -0.314100, 0.313985,
    -0.329644, 0.329669,
    0.341153, -0.341139,
};

float Cg_init[2] = {
    -0.263827, -0.263821
};

float xstd_init[12] = {
    0.004031, 0.001737, 0.338716, 0.120538, 0.001025, 0.000183, 0.046867, 0.129447, 0.000649, 0.000160, 0.047831, 0.138100
};

float xmean_init[12] = {
    0.010149, -0.005815, 0.430086, 1.037128, 0.003360, -0.007767, 0.010940, 0.615795, 0.003531, -0.007731, 0.015470, 0.701744
};

