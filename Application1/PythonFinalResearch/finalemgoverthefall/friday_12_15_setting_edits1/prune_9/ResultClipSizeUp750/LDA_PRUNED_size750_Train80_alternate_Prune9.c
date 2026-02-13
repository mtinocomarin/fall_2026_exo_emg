// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.06%
// test_accuracy: 64.73%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-12 13:15:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.639761, 0.639778,
    0.056762, -0.056797,
    0.719847, -0.719823,
    0.304806, -0.304813,
    -0.638359, 0.638137,
    0.251432, -0.251202,
    0.078157, -0.078151,
    0.069283, -0.069298,
    0.371688, -0.371631,
    -0.315766, 0.315717,
    -0.243994, 0.244000,
    0.480877, -0.480875,
};

float Cg_init[2] = {
    -0.327558, -0.327547
};

float xstd_init[12] = {
    0.004182, 0.001853, 0.352843, 0.124307, 0.001119, 0.000197, 0.049988, 0.133631, 0.000567, 0.000128, 0.039268, 0.135530
};

float xmean_init[12] = {
    0.010353, -0.005710, 0.443581, 1.037205, 0.003403, -0.007760, 0.012733, 0.617454, 0.003469, -0.007750, 0.010145, 0.696398
};

