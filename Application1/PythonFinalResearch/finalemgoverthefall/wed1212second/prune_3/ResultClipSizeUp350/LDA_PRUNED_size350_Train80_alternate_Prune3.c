// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.62%
// test_accuracy: 77.08%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 17:00:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.022481, -0.022473,
    -0.030661, 0.030610,
    -0.089638, 0.089650,
    -0.043779, 0.043800,
    1.273019, -1.272960,
    -1.109405, 1.109333,
    -0.178353, 0.178363,
    0.081465, -0.081457,
    -0.374380, 0.374384,
    -0.656080, 0.656089,
    0.249209, -0.249227,
    1.284268, -1.284264,
};

float Cg_init[2] = {
    -0.416623, -0.416613
};

float xstd_init[12] = {
    0.000841, 0.000075, 0.007038, 0.064910, 0.000770, 0.000140, 0.015239, 0.057207, 0.003278, 0.000978, 0.118825, 0.208556
};

float xmean_init[12] = {
    0.005507, -0.007761, 0.001303, 0.090115, 0.002392, -0.007844, 0.005287, 0.050115, 0.008985, -0.006641, 0.133947, 0.469081
};

